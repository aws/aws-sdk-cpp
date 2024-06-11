/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Synchronize Amazon Web Services Systems Manager Inventory data from multiple
   * Amazon Web Services accounts defined in Organizations to a centralized Amazon S3
   * bucket. Data is synchronized to individual key prefixes in the central bucket.
   * Each key prefix represents a different Amazon Web Services account
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncDestinationDataSharing">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncDestinationDataSharing
  {
  public:
    AWS_SSM_API ResourceDataSyncDestinationDataSharing();
    AWS_SSM_API ResourceDataSyncDestinationDataSharing(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncDestinationDataSharing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sharing data type. Only <code>Organization</code> is supported.</p>
     */
    inline const Aws::String& GetDestinationDataSharingType() const{ return m_destinationDataSharingType; }
    inline bool DestinationDataSharingTypeHasBeenSet() const { return m_destinationDataSharingTypeHasBeenSet; }
    inline void SetDestinationDataSharingType(const Aws::String& value) { m_destinationDataSharingTypeHasBeenSet = true; m_destinationDataSharingType = value; }
    inline void SetDestinationDataSharingType(Aws::String&& value) { m_destinationDataSharingTypeHasBeenSet = true; m_destinationDataSharingType = std::move(value); }
    inline void SetDestinationDataSharingType(const char* value) { m_destinationDataSharingTypeHasBeenSet = true; m_destinationDataSharingType.assign(value); }
    inline ResourceDataSyncDestinationDataSharing& WithDestinationDataSharingType(const Aws::String& value) { SetDestinationDataSharingType(value); return *this;}
    inline ResourceDataSyncDestinationDataSharing& WithDestinationDataSharingType(Aws::String&& value) { SetDestinationDataSharingType(std::move(value)); return *this;}
    inline ResourceDataSyncDestinationDataSharing& WithDestinationDataSharingType(const char* value) { SetDestinationDataSharingType(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationDataSharingType;
    bool m_destinationDataSharingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
