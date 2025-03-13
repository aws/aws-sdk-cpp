/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * the option to configure log subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ConfigureLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ConfigureLogsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogs"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


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
     * The ID of the channel to log subscription.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigureLogsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IngressAccessLogs& GetIngressAccessLogs() const { return m_ingressAccessLogs; }
    inline bool IngressAccessLogsHasBeenSet() const { return m_ingressAccessLogsHasBeenSet; }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    void SetIngressAccessLogs(IngressAccessLogsT&& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = std::forward<IngressAccessLogsT>(value); }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    ConfigureLogsRequest& WithIngressAccessLogs(IngressAccessLogsT&& value) { SetIngressAccessLogs(std::forward<IngressAccessLogsT>(value)); return *this;}
    ///@}
  private:

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IngressAccessLogs m_ingressAccessLogs;
    bool m_ingressAccessLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
