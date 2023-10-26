/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace NodeCategoryMapper
      {

        static const int BUSINESS_LOGIC_HASH = HashingUtils::HashString("BUSINESS_LOGIC");
        static const int ML_MODEL_HASH = HashingUtils::HashString("ML_MODEL");
        static const int MEDIA_SOURCE_HASH = HashingUtils::HashString("MEDIA_SOURCE");
        static const int MEDIA_SINK_HASH = HashingUtils::HashString("MEDIA_SINK");


        NodeCategory GetNodeCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUSINESS_LOGIC_HASH)
          {
            return NodeCategory::BUSINESS_LOGIC;
          }
          else if (hashCode == ML_MODEL_HASH)
          {
            return NodeCategory::ML_MODEL;
          }
          else if (hashCode == MEDIA_SOURCE_HASH)
          {
            return NodeCategory::MEDIA_SOURCE;
          }
          else if (hashCode == MEDIA_SINK_HASH)
          {
            return NodeCategory::MEDIA_SINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeCategory>(hashCode);
          }

          return NodeCategory::NOT_SET;
        }

        Aws::String GetNameForNodeCategory(NodeCategory enumValue)
        {
          switch(enumValue)
          {
          case NodeCategory::NOT_SET:
            return {};
          case NodeCategory::BUSINESS_LOGIC:
            return "BUSINESS_LOGIC";
          case NodeCategory::ML_MODEL:
            return "ML_MODEL";
          case NodeCategory::MEDIA_SOURCE:
            return "MEDIA_SOURCE";
          case NodeCategory::MEDIA_SINK:
            return "MEDIA_SINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeCategoryMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
