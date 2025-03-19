/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class ExportServerEngineAttributeRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API ExportServerEngineAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportServerEngineAttribute"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline const Aws::String& GetExportAttributeName() const { return m_exportAttributeName; }
    inline bool ExportAttributeNameHasBeenSet() const { return m_exportAttributeNameHasBeenSet; }
    template<typename ExportAttributeNameT = Aws::String>
    void SetExportAttributeName(ExportAttributeNameT&& value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName = std::forward<ExportAttributeNameT>(value); }
    template<typename ExportAttributeNameT = Aws::String>
    ExportServerEngineAttributeRequest& WithExportAttributeName(ExportAttributeNameT&& value) { SetExportAttributeName(std::forward<ExportAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    ExportServerEngineAttributeRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetInputAttributes() const { return m_inputAttributes; }
    inline bool InputAttributesHasBeenSet() const { return m_inputAttributesHasBeenSet; }
    template<typename InputAttributesT = Aws::Vector<EngineAttribute>>
    void SetInputAttributes(InputAttributesT&& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes = std::forward<InputAttributesT>(value); }
    template<typename InputAttributesT = Aws::Vector<EngineAttribute>>
    ExportServerEngineAttributeRequest& WithInputAttributes(InputAttributesT&& value) { SetInputAttributes(std::forward<InputAttributesT>(value)); return *this;}
    template<typename InputAttributesT = EngineAttribute>
    ExportServerEngineAttributeRequest& AddInputAttributes(InputAttributesT&& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes.emplace_back(std::forward<InputAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_exportAttributeName;
    bool m_exportAttributeNameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_inputAttributes;
    bool m_inputAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
