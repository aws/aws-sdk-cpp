﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/VoiceId.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace VoiceIdMapper
      {

        static const int Aditi_HASH = HashingUtils::HashString("Aditi");
        static const int Amy_HASH = HashingUtils::HashString("Amy");
        static const int Astrid_HASH = HashingUtils::HashString("Astrid");
        static const int Bianca_HASH = HashingUtils::HashString("Bianca");
        static const int Brian_HASH = HashingUtils::HashString("Brian");
        static const int Camila_HASH = HashingUtils::HashString("Camila");
        static const int Carla_HASH = HashingUtils::HashString("Carla");
        static const int Carmen_HASH = HashingUtils::HashString("Carmen");
        static const int Celine_HASH = HashingUtils::HashString("Celine");
        static const int Chantal_HASH = HashingUtils::HashString("Chantal");
        static const int Conchita_HASH = HashingUtils::HashString("Conchita");
        static const int Cristiano_HASH = HashingUtils::HashString("Cristiano");
        static const int Dora_HASH = HashingUtils::HashString("Dora");
        static const int Emma_HASH = HashingUtils::HashString("Emma");
        static const int Enrique_HASH = HashingUtils::HashString("Enrique");
        static const int Ewa_HASH = HashingUtils::HashString("Ewa");
        static const int Filiz_HASH = HashingUtils::HashString("Filiz");
        static const int Gabrielle_HASH = HashingUtils::HashString("Gabrielle");
        static const int Geraint_HASH = HashingUtils::HashString("Geraint");
        static const int Giorgio_HASH = HashingUtils::HashString("Giorgio");
        static const int Gwyneth_HASH = HashingUtils::HashString("Gwyneth");
        static const int Hans_HASH = HashingUtils::HashString("Hans");
        static const int Ines_HASH = HashingUtils::HashString("Ines");
        static const int Ivy_HASH = HashingUtils::HashString("Ivy");
        static const int Jacek_HASH = HashingUtils::HashString("Jacek");
        static const int Jan_HASH = HashingUtils::HashString("Jan");
        static const int Joanna_HASH = HashingUtils::HashString("Joanna");
        static const int Joey_HASH = HashingUtils::HashString("Joey");
        static const int Justin_HASH = HashingUtils::HashString("Justin");
        static const int Karl_HASH = HashingUtils::HashString("Karl");
        static const int Kendra_HASH = HashingUtils::HashString("Kendra");
        static const int Kevin_HASH = HashingUtils::HashString("Kevin");
        static const int Kimberly_HASH = HashingUtils::HashString("Kimberly");
        static const int Lea_HASH = HashingUtils::HashString("Lea");
        static const int Liv_HASH = HashingUtils::HashString("Liv");
        static const int Lotte_HASH = HashingUtils::HashString("Lotte");
        static const int Lucia_HASH = HashingUtils::HashString("Lucia");
        static const int Lupe_HASH = HashingUtils::HashString("Lupe");
        static const int Mads_HASH = HashingUtils::HashString("Mads");
        static const int Maja_HASH = HashingUtils::HashString("Maja");
        static const int Marlene_HASH = HashingUtils::HashString("Marlene");
        static const int Mathieu_HASH = HashingUtils::HashString("Mathieu");
        static const int Matthew_HASH = HashingUtils::HashString("Matthew");
        static const int Maxim_HASH = HashingUtils::HashString("Maxim");
        static const int Mia_HASH = HashingUtils::HashString("Mia");
        static const int Miguel_HASH = HashingUtils::HashString("Miguel");
        static const int Mizuki_HASH = HashingUtils::HashString("Mizuki");
        static const int Naja_HASH = HashingUtils::HashString("Naja");
        static const int Nicole_HASH = HashingUtils::HashString("Nicole");
        static const int Olivia_HASH = HashingUtils::HashString("Olivia");
        static const int Penelope_HASH = HashingUtils::HashString("Penelope");
        static const int Raveena_HASH = HashingUtils::HashString("Raveena");
        static const int Ricardo_HASH = HashingUtils::HashString("Ricardo");
        static const int Ruben_HASH = HashingUtils::HashString("Ruben");
        static const int Russell_HASH = HashingUtils::HashString("Russell");
        static const int Salli_HASH = HashingUtils::HashString("Salli");
        static const int Seoyeon_HASH = HashingUtils::HashString("Seoyeon");
        static const int Takumi_HASH = HashingUtils::HashString("Takumi");
        static const int Tatyana_HASH = HashingUtils::HashString("Tatyana");
        static const int Vicki_HASH = HashingUtils::HashString("Vicki");
        static const int Vitoria_HASH = HashingUtils::HashString("Vitoria");
        static const int Zeina_HASH = HashingUtils::HashString("Zeina");
        static const int Zhiyu_HASH = HashingUtils::HashString("Zhiyu");
        static const int Aria_HASH = HashingUtils::HashString("Aria");
        static const int Ayanda_HASH = HashingUtils::HashString("Ayanda");
        static const int Arlet_HASH = HashingUtils::HashString("Arlet");
        static const int Hannah_HASH = HashingUtils::HashString("Hannah");
        static const int Arthur_HASH = HashingUtils::HashString("Arthur");
        static const int Daniel_HASH = HashingUtils::HashString("Daniel");
        static const int Liam_HASH = HashingUtils::HashString("Liam");
        static const int Pedro_HASH = HashingUtils::HashString("Pedro");
        static const int Kajal_HASH = HashingUtils::HashString("Kajal");
        static const int Hiujin_HASH = HashingUtils::HashString("Hiujin");
        static const int Laura_HASH = HashingUtils::HashString("Laura");
        static const int Elin_HASH = HashingUtils::HashString("Elin");
        static const int Ida_HASH = HashingUtils::HashString("Ida");
        static const int Suvi_HASH = HashingUtils::HashString("Suvi");
        static const int Ola_HASH = HashingUtils::HashString("Ola");
        static const int Hala_HASH = HashingUtils::HashString("Hala");
        static const int Andres_HASH = HashingUtils::HashString("Andres");
        static const int Sergio_HASH = HashingUtils::HashString("Sergio");
        static const int Remi_HASH = HashingUtils::HashString("Remi");
        static const int Adriano_HASH = HashingUtils::HashString("Adriano");
        static const int Thiago_HASH = HashingUtils::HashString("Thiago");
        static const int Ruth_HASH = HashingUtils::HashString("Ruth");
        static const int Stephen_HASH = HashingUtils::HashString("Stephen");
        static const int Kazuha_HASH = HashingUtils::HashString("Kazuha");
        static const int Tomoko_HASH = HashingUtils::HashString("Tomoko");
        static const int Niamh_HASH = HashingUtils::HashString("Niamh");
        static const int Sofie_HASH = HashingUtils::HashString("Sofie");
        static const int Lisa_HASH = HashingUtils::HashString("Lisa");
        static const int Isabelle_HASH = HashingUtils::HashString("Isabelle");
        static const int Zayd_HASH = HashingUtils::HashString("Zayd");
        static const int Danielle_HASH = HashingUtils::HashString("Danielle");
        static const int Gregory_HASH = HashingUtils::HashString("Gregory");


        VoiceId GetVoiceIdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Aditi_HASH)
          {
            return VoiceId::Aditi;
          }
          else if (hashCode == Amy_HASH)
          {
            return VoiceId::Amy;
          }
          else if (hashCode == Astrid_HASH)
          {
            return VoiceId::Astrid;
          }
          else if (hashCode == Bianca_HASH)
          {
            return VoiceId::Bianca;
          }
          else if (hashCode == Brian_HASH)
          {
            return VoiceId::Brian;
          }
          else if (hashCode == Camila_HASH)
          {
            return VoiceId::Camila;
          }
          else if (hashCode == Carla_HASH)
          {
            return VoiceId::Carla;
          }
          else if (hashCode == Carmen_HASH)
          {
            return VoiceId::Carmen;
          }
          else if (hashCode == Celine_HASH)
          {
            return VoiceId::Celine;
          }
          else if (hashCode == Chantal_HASH)
          {
            return VoiceId::Chantal;
          }
          else if (hashCode == Conchita_HASH)
          {
            return VoiceId::Conchita;
          }
          else if (hashCode == Cristiano_HASH)
          {
            return VoiceId::Cristiano;
          }
          else if (hashCode == Dora_HASH)
          {
            return VoiceId::Dora;
          }
          else if (hashCode == Emma_HASH)
          {
            return VoiceId::Emma;
          }
          else if (hashCode == Enrique_HASH)
          {
            return VoiceId::Enrique;
          }
          else if (hashCode == Ewa_HASH)
          {
            return VoiceId::Ewa;
          }
          else if (hashCode == Filiz_HASH)
          {
            return VoiceId::Filiz;
          }
          else if (hashCode == Gabrielle_HASH)
          {
            return VoiceId::Gabrielle;
          }
          else if (hashCode == Geraint_HASH)
          {
            return VoiceId::Geraint;
          }
          else if (hashCode == Giorgio_HASH)
          {
            return VoiceId::Giorgio;
          }
          else if (hashCode == Gwyneth_HASH)
          {
            return VoiceId::Gwyneth;
          }
          else if (hashCode == Hans_HASH)
          {
            return VoiceId::Hans;
          }
          else if (hashCode == Ines_HASH)
          {
            return VoiceId::Ines;
          }
          else if (hashCode == Ivy_HASH)
          {
            return VoiceId::Ivy;
          }
          else if (hashCode == Jacek_HASH)
          {
            return VoiceId::Jacek;
          }
          else if (hashCode == Jan_HASH)
          {
            return VoiceId::Jan;
          }
          else if (hashCode == Joanna_HASH)
          {
            return VoiceId::Joanna;
          }
          else if (hashCode == Joey_HASH)
          {
            return VoiceId::Joey;
          }
          else if (hashCode == Justin_HASH)
          {
            return VoiceId::Justin;
          }
          else if (hashCode == Karl_HASH)
          {
            return VoiceId::Karl;
          }
          else if (hashCode == Kendra_HASH)
          {
            return VoiceId::Kendra;
          }
          else if (hashCode == Kevin_HASH)
          {
            return VoiceId::Kevin;
          }
          else if (hashCode == Kimberly_HASH)
          {
            return VoiceId::Kimberly;
          }
          else if (hashCode == Lea_HASH)
          {
            return VoiceId::Lea;
          }
          else if (hashCode == Liv_HASH)
          {
            return VoiceId::Liv;
          }
          else if (hashCode == Lotte_HASH)
          {
            return VoiceId::Lotte;
          }
          else if (hashCode == Lucia_HASH)
          {
            return VoiceId::Lucia;
          }
          else if (hashCode == Lupe_HASH)
          {
            return VoiceId::Lupe;
          }
          else if (hashCode == Mads_HASH)
          {
            return VoiceId::Mads;
          }
          else if (hashCode == Maja_HASH)
          {
            return VoiceId::Maja;
          }
          else if (hashCode == Marlene_HASH)
          {
            return VoiceId::Marlene;
          }
          else if (hashCode == Mathieu_HASH)
          {
            return VoiceId::Mathieu;
          }
          else if (hashCode == Matthew_HASH)
          {
            return VoiceId::Matthew;
          }
          else if (hashCode == Maxim_HASH)
          {
            return VoiceId::Maxim;
          }
          else if (hashCode == Mia_HASH)
          {
            return VoiceId::Mia;
          }
          else if (hashCode == Miguel_HASH)
          {
            return VoiceId::Miguel;
          }
          else if (hashCode == Mizuki_HASH)
          {
            return VoiceId::Mizuki;
          }
          else if (hashCode == Naja_HASH)
          {
            return VoiceId::Naja;
          }
          else if (hashCode == Nicole_HASH)
          {
            return VoiceId::Nicole;
          }
          else if (hashCode == Olivia_HASH)
          {
            return VoiceId::Olivia;
          }
          else if (hashCode == Penelope_HASH)
          {
            return VoiceId::Penelope;
          }
          else if (hashCode == Raveena_HASH)
          {
            return VoiceId::Raveena;
          }
          else if (hashCode == Ricardo_HASH)
          {
            return VoiceId::Ricardo;
          }
          else if (hashCode == Ruben_HASH)
          {
            return VoiceId::Ruben;
          }
          else if (hashCode == Russell_HASH)
          {
            return VoiceId::Russell;
          }
          else if (hashCode == Salli_HASH)
          {
            return VoiceId::Salli;
          }
          else if (hashCode == Seoyeon_HASH)
          {
            return VoiceId::Seoyeon;
          }
          else if (hashCode == Takumi_HASH)
          {
            return VoiceId::Takumi;
          }
          else if (hashCode == Tatyana_HASH)
          {
            return VoiceId::Tatyana;
          }
          else if (hashCode == Vicki_HASH)
          {
            return VoiceId::Vicki;
          }
          else if (hashCode == Vitoria_HASH)
          {
            return VoiceId::Vitoria;
          }
          else if (hashCode == Zeina_HASH)
          {
            return VoiceId::Zeina;
          }
          else if (hashCode == Zhiyu_HASH)
          {
            return VoiceId::Zhiyu;
          }
          else if (hashCode == Aria_HASH)
          {
            return VoiceId::Aria;
          }
          else if (hashCode == Ayanda_HASH)
          {
            return VoiceId::Ayanda;
          }
          else if (hashCode == Arlet_HASH)
          {
            return VoiceId::Arlet;
          }
          else if (hashCode == Hannah_HASH)
          {
            return VoiceId::Hannah;
          }
          else if (hashCode == Arthur_HASH)
          {
            return VoiceId::Arthur;
          }
          else if (hashCode == Daniel_HASH)
          {
            return VoiceId::Daniel;
          }
          else if (hashCode == Liam_HASH)
          {
            return VoiceId::Liam;
          }
          else if (hashCode == Pedro_HASH)
          {
            return VoiceId::Pedro;
          }
          else if (hashCode == Kajal_HASH)
          {
            return VoiceId::Kajal;
          }
          else if (hashCode == Hiujin_HASH)
          {
            return VoiceId::Hiujin;
          }
          else if (hashCode == Laura_HASH)
          {
            return VoiceId::Laura;
          }
          else if (hashCode == Elin_HASH)
          {
            return VoiceId::Elin;
          }
          else if (hashCode == Ida_HASH)
          {
            return VoiceId::Ida;
          }
          else if (hashCode == Suvi_HASH)
          {
            return VoiceId::Suvi;
          }
          else if (hashCode == Ola_HASH)
          {
            return VoiceId::Ola;
          }
          else if (hashCode == Hala_HASH)
          {
            return VoiceId::Hala;
          }
          else if (hashCode == Andres_HASH)
          {
            return VoiceId::Andres;
          }
          else if (hashCode == Sergio_HASH)
          {
            return VoiceId::Sergio;
          }
          else if (hashCode == Remi_HASH)
          {
            return VoiceId::Remi;
          }
          else if (hashCode == Adriano_HASH)
          {
            return VoiceId::Adriano;
          }
          else if (hashCode == Thiago_HASH)
          {
            return VoiceId::Thiago;
          }
          else if (hashCode == Ruth_HASH)
          {
            return VoiceId::Ruth;
          }
          else if (hashCode == Stephen_HASH)
          {
            return VoiceId::Stephen;
          }
          else if (hashCode == Kazuha_HASH)
          {
            return VoiceId::Kazuha;
          }
          else if (hashCode == Tomoko_HASH)
          {
            return VoiceId::Tomoko;
          }
          else if (hashCode == Niamh_HASH)
          {
            return VoiceId::Niamh;
          }
          else if (hashCode == Sofie_HASH)
          {
            return VoiceId::Sofie;
          }
          else if (hashCode == Lisa_HASH)
          {
            return VoiceId::Lisa;
          }
          else if (hashCode == Isabelle_HASH)
          {
            return VoiceId::Isabelle;
          }
          else if (hashCode == Zayd_HASH)
          {
            return VoiceId::Zayd;
          }
          else if (hashCode == Danielle_HASH)
          {
            return VoiceId::Danielle;
          }
          else if (hashCode == Gregory_HASH)
          {
            return VoiceId::Gregory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceId>(hashCode);
          }

          return VoiceId::NOT_SET;
        }

        Aws::String GetNameForVoiceId(VoiceId enumValue)
        {
          switch(enumValue)
          {
          case VoiceId::NOT_SET:
            return {};
          case VoiceId::Aditi:
            return "Aditi";
          case VoiceId::Amy:
            return "Amy";
          case VoiceId::Astrid:
            return "Astrid";
          case VoiceId::Bianca:
            return "Bianca";
          case VoiceId::Brian:
            return "Brian";
          case VoiceId::Camila:
            return "Camila";
          case VoiceId::Carla:
            return "Carla";
          case VoiceId::Carmen:
            return "Carmen";
          case VoiceId::Celine:
            return "Celine";
          case VoiceId::Chantal:
            return "Chantal";
          case VoiceId::Conchita:
            return "Conchita";
          case VoiceId::Cristiano:
            return "Cristiano";
          case VoiceId::Dora:
            return "Dora";
          case VoiceId::Emma:
            return "Emma";
          case VoiceId::Enrique:
            return "Enrique";
          case VoiceId::Ewa:
            return "Ewa";
          case VoiceId::Filiz:
            return "Filiz";
          case VoiceId::Gabrielle:
            return "Gabrielle";
          case VoiceId::Geraint:
            return "Geraint";
          case VoiceId::Giorgio:
            return "Giorgio";
          case VoiceId::Gwyneth:
            return "Gwyneth";
          case VoiceId::Hans:
            return "Hans";
          case VoiceId::Ines:
            return "Ines";
          case VoiceId::Ivy:
            return "Ivy";
          case VoiceId::Jacek:
            return "Jacek";
          case VoiceId::Jan:
            return "Jan";
          case VoiceId::Joanna:
            return "Joanna";
          case VoiceId::Joey:
            return "Joey";
          case VoiceId::Justin:
            return "Justin";
          case VoiceId::Karl:
            return "Karl";
          case VoiceId::Kendra:
            return "Kendra";
          case VoiceId::Kevin:
            return "Kevin";
          case VoiceId::Kimberly:
            return "Kimberly";
          case VoiceId::Lea:
            return "Lea";
          case VoiceId::Liv:
            return "Liv";
          case VoiceId::Lotte:
            return "Lotte";
          case VoiceId::Lucia:
            return "Lucia";
          case VoiceId::Lupe:
            return "Lupe";
          case VoiceId::Mads:
            return "Mads";
          case VoiceId::Maja:
            return "Maja";
          case VoiceId::Marlene:
            return "Marlene";
          case VoiceId::Mathieu:
            return "Mathieu";
          case VoiceId::Matthew:
            return "Matthew";
          case VoiceId::Maxim:
            return "Maxim";
          case VoiceId::Mia:
            return "Mia";
          case VoiceId::Miguel:
            return "Miguel";
          case VoiceId::Mizuki:
            return "Mizuki";
          case VoiceId::Naja:
            return "Naja";
          case VoiceId::Nicole:
            return "Nicole";
          case VoiceId::Olivia:
            return "Olivia";
          case VoiceId::Penelope:
            return "Penelope";
          case VoiceId::Raveena:
            return "Raveena";
          case VoiceId::Ricardo:
            return "Ricardo";
          case VoiceId::Ruben:
            return "Ruben";
          case VoiceId::Russell:
            return "Russell";
          case VoiceId::Salli:
            return "Salli";
          case VoiceId::Seoyeon:
            return "Seoyeon";
          case VoiceId::Takumi:
            return "Takumi";
          case VoiceId::Tatyana:
            return "Tatyana";
          case VoiceId::Vicki:
            return "Vicki";
          case VoiceId::Vitoria:
            return "Vitoria";
          case VoiceId::Zeina:
            return "Zeina";
          case VoiceId::Zhiyu:
            return "Zhiyu";
          case VoiceId::Aria:
            return "Aria";
          case VoiceId::Ayanda:
            return "Ayanda";
          case VoiceId::Arlet:
            return "Arlet";
          case VoiceId::Hannah:
            return "Hannah";
          case VoiceId::Arthur:
            return "Arthur";
          case VoiceId::Daniel:
            return "Daniel";
          case VoiceId::Liam:
            return "Liam";
          case VoiceId::Pedro:
            return "Pedro";
          case VoiceId::Kajal:
            return "Kajal";
          case VoiceId::Hiujin:
            return "Hiujin";
          case VoiceId::Laura:
            return "Laura";
          case VoiceId::Elin:
            return "Elin";
          case VoiceId::Ida:
            return "Ida";
          case VoiceId::Suvi:
            return "Suvi";
          case VoiceId::Ola:
            return "Ola";
          case VoiceId::Hala:
            return "Hala";
          case VoiceId::Andres:
            return "Andres";
          case VoiceId::Sergio:
            return "Sergio";
          case VoiceId::Remi:
            return "Remi";
          case VoiceId::Adriano:
            return "Adriano";
          case VoiceId::Thiago:
            return "Thiago";
          case VoiceId::Ruth:
            return "Ruth";
          case VoiceId::Stephen:
            return "Stephen";
          case VoiceId::Kazuha:
            return "Kazuha";
          case VoiceId::Tomoko:
            return "Tomoko";
          case VoiceId::Niamh:
            return "Niamh";
          case VoiceId::Sofie:
            return "Sofie";
          case VoiceId::Lisa:
            return "Lisa";
          case VoiceId::Isabelle:
            return "Isabelle";
          case VoiceId::Zayd:
            return "Zayd";
          case VoiceId::Danielle:
            return "Danielle";
          case VoiceId::Gregory:
            return "Gregory";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceIdMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
