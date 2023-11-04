# GCLC
Projekat iz GCLC-a, na temu "Dezargovo i Paposovo tvrđenje".

## Animacije

### Dezargovo tvrđenje
* Prva animacija (_dezarg1.gcl_) demonstrira da Dezargovo tvrđenje važi i kada se dogodi da se trotemenici "seku" i da se u tom slučaju tačke incidentne njihovoj osi nalaze baš na secištima spojnica odgovarajućih tačaka, kao i da se mogu desiti situacije da se dva temena poklope, u kom slučaju se dve tačke ose takođe poklapaju (međusobno a i sa tim temenima).
* Druga animacija (_dezarg2.gcl_) ista je kao i prva, ali bez obeležja tačaka (radi veće preglednosti).
* Treća animacija (_dezarg3.gcl_) demonstrira da Dezargovo tvrđenje važi i u slučaju Euklidski paralelnih pravih - kada su dve odgovarajuće prave trotemenika paralelne (iako pojam paralelnosti u projektivnoj geometriji ne postoji), tačnije vidi se prelaz kroz "beskonačno daleku tačku" koja odgovara klasi ekvivalencije pravih paralelnih sa ovim pravama. Takođe, može se videti i momenat kada teme jednog od dva trotemenika prolazi kroz centar ovih trotemenika. Ova animacija, takođe radi preglednosti, nema oznake tačaka.

### Paposovo tvrđenje
* Prva animacija (_papos1.gcl_) predstavlja najčešću reprezentaciju tvrđenja Paposa - tačke iz koje se nalaze sa iste strane secišta početnih pravih. Ovaj primer demonstrira samu prirodu Paposovog tvrđenja.
* Druga animacija (_papos2.gcl_) demonstrira jedan interesantan trenutak - prolazak secišta početnih pravih iz teoreme kroz (u Euklidskom smislu) beskonačnu tačku. Takođe, može se videti i ponašanje Paposove prave kada se tačke nađu u suprotnom poretku (A-C-B umesto A-B-C). Ovde se, naravno, događa i slučaj preklapanja dveju tački, što nije dozvoljeno prema Paposovom tvrđenju, ali se na ovaj način demonstrira da Paposovo tvrđenje važi i u "slučajevima limesa", tj. kada su tačke veoma blizu.
* Treća animacija (_papos3.gcl_), ponovo, pokazuje nedozvoljen slučaj - poklapanje jedne od tačaka sa secištem početnih pravih iz Paposovog tvrđenja, ali je i ovde zanimljivo posmatrati "slučaj limesa". Ovde je, takođe, prezentovan i nestandardni prikaz rasporeda tačaka - sa različitih strana secišta početnih pravih.
* Četvrta animacija (_papos4.gcl_) je, isključivo kao trivija, zanimljiva iz ugla posmatranja "slučaja limesa" kada se početne prave poklapaju.

## Dokazi

### Dezargovo tvrđenje
Korišćenjem alata GCLC dokazana uspešno je, i za relativno kratko vreme, dokazano tvrđenje Dezarga. Izvorni fajl dat je pod _dezarg_teorema.gcl_, a LaTeX kod koji je rešavač keirao može se naći u _dezarg_teorema_proof.tex_.

### Paposovo tvrđenje
Slično kao i iznad, GCLC-om je uspešno kreiran dokaz Paposovog tvrđenja (ali je za dokazivanje ovog tvrđenja bilo potrebno značajno više vremena - ovo je zbog toga što je, između ostalog, Paposovo tvrđenje restriktivnije, tj. jače, od Dezargovog - "Hesenbergova teorema"). Originalni fajl je _papos_teorema.gcl_, a odgovarajući LaTeX dokument je _papos_teorema_proof.tex_.
