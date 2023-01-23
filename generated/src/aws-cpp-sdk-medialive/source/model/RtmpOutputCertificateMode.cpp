/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RtmpOutputCertificateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace RtmpOutputCertificateModeMapper
      {

        static const int SELF_SIGNED_HASH = HashingUtils::HashString("SELF_SIGNED");
        static const int VERIFY_AUTHENTICITY_HASH = HashingUtils::HashString("VERIFY_AUTHENTICITY");


        RtmpOutputCertificateMode GetRtmpOutputCertificateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_SIGNED_HASH)
          {
            return RtmpOutputCertificateMode::SELF_SIGNED;
          }
          else if (hashCode == VERIFY_AUTHENTICITY_HASH)
          {
            return RtmpOutputCertificateMode::VERIFY_AUTHENTICITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RtmpOutputCertificateMode>(hashCode);
          }

          return RtmpOutputCertificateMode::NOT_SET;
        }

        Aws::String GetNameForRtmpOutputCertificateMode(RtmpOutputCertificateMode enumValue)
        {
          switch(enumValue)
          {
          case RtmpOutputCertificateMode::SELF_SIGNED:
            return "SELF_SIGNED";
          case RtmpOutputCertificateMode::VERIFY_AUTHENTICITY:
            return "VERIFY_AUTHENTICITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RtmpOutputCertificateModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
