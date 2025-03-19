/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * The option to configure log subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ConfigureLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsRequest : public MediaPackageVodRequest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ConfigureLogsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogs"; }

    AWS_MEDIAPACKAGEVOD_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const { return m_egressAccessLogs; }
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    void SetEgressAccessLogs(EgressAccessLogsT&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::forward<EgressAccessLogsT>(value); }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    ConfigureLogsRequest& WithEgressAccessLogs(EgressAccessLogsT&& value) { SetEgressAccessLogs(std::forward<EgressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigureLogsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
