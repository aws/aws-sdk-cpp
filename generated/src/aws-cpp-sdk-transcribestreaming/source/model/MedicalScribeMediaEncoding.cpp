/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeMediaEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace MedicalScribeMediaEncodingMapper
      {

        static const int pcm_HASH = HashingUtils::HashString("pcm");
        static const int ogg_opus_HASH = HashingUtils::HashString("ogg-opus");
        static const int flac_HASH = HashingUtils::HashString("flac");


        MedicalScribeMediaEncoding GetMedicalScribeMediaEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pcm_HASH)
          {
            return MedicalScribeMediaEncoding::pcm;
          }
          else if (hashCode == ogg_opus_HASH)
          {
            return MedicalScribeMediaEncoding::ogg_opus;
          }
          else if (hashCode == flac_HASH)
          {
            return MedicalScribeMediaEncoding::flac;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeMediaEncoding>(hashCode);
          }

          return MedicalScribeMediaEncoding::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeMediaEncoding(MedicalScribeMediaEncoding enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeMediaEncoding::NOT_SET:
            return {};
          case MedicalScribeMediaEncoding::pcm:
            return "pcm";
          case MedicalScribeMediaEncoding::ogg_opus:
            return "ogg-opus";
          case MedicalScribeMediaEncoding::flac:
            return "flac";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeMediaEncodingMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
