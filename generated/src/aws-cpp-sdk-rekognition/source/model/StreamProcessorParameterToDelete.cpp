/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorParameterToDelete.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace StreamProcessorParameterToDeleteMapper
      {

        static const int ConnectedHomeMinConfidence_HASH = HashingUtils::HashString("ConnectedHomeMinConfidence");
        static const int RegionsOfInterest_HASH = HashingUtils::HashString("RegionsOfInterest");


        StreamProcessorParameterToDelete GetStreamProcessorParameterToDeleteForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConnectedHomeMinConfidence_HASH)
          {
            return StreamProcessorParameterToDelete::ConnectedHomeMinConfidence;
          }
          else if (hashCode == RegionsOfInterest_HASH)
          {
            return StreamProcessorParameterToDelete::RegionsOfInterest;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamProcessorParameterToDelete>(hashCode);
          }

          return StreamProcessorParameterToDelete::NOT_SET;
        }

        Aws::String GetNameForStreamProcessorParameterToDelete(StreamProcessorParameterToDelete enumValue)
        {
          switch(enumValue)
          {
          case StreamProcessorParameterToDelete::NOT_SET:
            return {};
          case StreamProcessorParameterToDelete::ConnectedHomeMinConfidence:
            return "ConnectedHomeMinConfidence";
          case StreamProcessorParameterToDelete::RegionsOfInterest:
            return "RegionsOfInterest";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamProcessorParameterToDeleteMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
