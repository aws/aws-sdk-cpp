﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/InAppTemplateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateInAppTemplateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateInAppTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInAppTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies whether to save the updates as a new version of the message
     * template. Valid values are: true, save the updates as a new version; and, false,
     * save the updates to (overwrite) the latest existing version of the template.</p>
     * <p>If you don't specify a value for this parameter, Amazon Pinpoint saves the
     * updates to (overwrites) the latest existing version of the template. If you
     * specify a value of true for this parameter, don't specify a value for the
     * version parameter. Otherwise, an error will occur.</p>
     */
    inline bool GetCreateNewVersion() const { return m_createNewVersion; }
    inline bool CreateNewVersionHasBeenSet() const { return m_createNewVersionHasBeenSet; }
    inline void SetCreateNewVersion(bool value) { m_createNewVersionHasBeenSet = true; m_createNewVersion = value; }
    inline UpdateInAppTemplateRequest& WithCreateNewVersion(bool value) { SetCreateNewVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const InAppTemplateRequest& GetInAppTemplateRequest() const { return m_inAppTemplateRequest; }
    inline bool InAppTemplateRequestHasBeenSet() const { return m_inAppTemplateRequestHasBeenSet; }
    template<typename InAppTemplateRequestT = InAppTemplateRequest>
    void SetInAppTemplateRequest(InAppTemplateRequestT&& value) { m_inAppTemplateRequestHasBeenSet = true; m_inAppTemplateRequest = std::forward<InAppTemplateRequestT>(value); }
    template<typename InAppTemplateRequestT = InAppTemplateRequest>
    UpdateInAppTemplateRequest& WithInAppTemplateRequest(InAppTemplateRequestT&& value) { SetInAppTemplateRequest(std::forward<InAppTemplateRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateInAppTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    UpdateInAppTemplateRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    bool m_createNewVersion{false};
    bool m_createNewVersionHasBeenSet = false;

    InAppTemplateRequest m_inAppTemplateRequest;
    bool m_inAppTemplateRequestHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
