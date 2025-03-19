/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/VdmOptions.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to add specific VDM settings to a configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetVdmOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetVdmOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetVdmOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetVdmOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    PutConfigurationSetVdmOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VDM options to apply to the configuration set.</p>
     */
    inline const VdmOptions& GetVdmOptions() const { return m_vdmOptions; }
    inline bool VdmOptionsHasBeenSet() const { return m_vdmOptionsHasBeenSet; }
    template<typename VdmOptionsT = VdmOptions>
    void SetVdmOptions(VdmOptionsT&& value) { m_vdmOptionsHasBeenSet = true; m_vdmOptions = std::forward<VdmOptionsT>(value); }
    template<typename VdmOptionsT = VdmOptions>
    PutConfigurationSetVdmOptionsRequest& WithVdmOptions(VdmOptionsT&& value) { SetVdmOptions(std::forward<VdmOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    VdmOptions m_vdmOptions;
    bool m_vdmOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
