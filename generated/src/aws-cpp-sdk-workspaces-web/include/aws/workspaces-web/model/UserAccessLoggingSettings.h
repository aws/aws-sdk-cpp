/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>A user access logging settings resource that can be associated with a web
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UserAccessLoggingSettings">AWS
   * API Reference</a></p>
   */
  class UserAccessLoggingSettings
  {
  public:
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings() = default;
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const { return m_userAccessLoggingSettingsArn; }
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    void SetUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::forward<UserAccessLoggingSettingsArnT>(value); }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    UserAccessLoggingSettings& WithUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { SetUserAccessLoggingSettingsArn(std::forward<UserAccessLoggingSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const { return m_associatedPortalArns; }
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    void SetAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::forward<AssociatedPortalArnsT>(value); }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    UserAccessLoggingSettings& WithAssociatedPortalArns(AssociatedPortalArnsT&& value) { SetAssociatedPortalArns(std::forward<AssociatedPortalArnsT>(value)); return *this;}
    template<typename AssociatedPortalArnsT = Aws::String>
    UserAccessLoggingSettings& AddAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.emplace_back(std::forward<AssociatedPortalArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline const Aws::String& GetKinesisStreamArn() const { return m_kinesisStreamArn; }
    inline bool KinesisStreamArnHasBeenSet() const { return m_kinesisStreamArnHasBeenSet; }
    template<typename KinesisStreamArnT = Aws::String>
    void SetKinesisStreamArn(KinesisStreamArnT&& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = std::forward<KinesisStreamArnT>(value); }
    template<typename KinesisStreamArnT = Aws::String>
    UserAccessLoggingSettings& WithKinesisStreamArn(KinesisStreamArnT&& value) { SetKinesisStreamArn(std::forward<KinesisStreamArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_kinesisStreamArn;
    bool m_kinesisStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
