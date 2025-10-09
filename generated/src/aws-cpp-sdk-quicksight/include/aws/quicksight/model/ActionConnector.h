/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ActionConnectorType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/ActionConnectorError.h>
#include <aws/quicksight/model/ReadAuthConfig.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Contains detailed information about an action connector, including its
   * configuration, status, and enabled actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ActionConnector">AWS
   * API Reference</a></p>
   */
  class ActionConnector
  {
  public:
    AWS_QUICKSIGHT_API ActionConnector() = default;
    AWS_QUICKSIGHT_API ActionConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ActionConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the action connector.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ActionConnector& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the action connector.</p>
     */
    inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
    inline bool ActionConnectorIdHasBeenSet() const { return m_actionConnectorIdHasBeenSet; }
    template<typename ActionConnectorIdT = Aws::String>
    void SetActionConnectorId(ActionConnectorIdT&& value) { m_actionConnectorIdHasBeenSet = true; m_actionConnectorId = std::forward<ActionConnectorIdT>(value); }
    template<typename ActionConnectorIdT = Aws::String>
    ActionConnector& WithActionConnectorId(ActionConnectorIdT&& value) { SetActionConnectorId(std::forward<ActionConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action connector.</p>
     */
    inline ActionConnectorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionConnectorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActionConnector& WithType(ActionConnectorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action connector.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActionConnector& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the action connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ActionConnector& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the action connector was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ActionConnector& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the action connector.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ActionConnector& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information if the action connector is in an error state.</p>
     */
    inline const ActionConnectorError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ActionConnectorError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ActionConnectorError>
    ActionConnector& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the action connector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionConnector& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration used to connect to the external service.</p>
     */
    inline const ReadAuthConfig& GetAuthenticationConfig() const { return m_authenticationConfig; }
    inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }
    template<typename AuthenticationConfigT = ReadAuthConfig>
    void SetAuthenticationConfig(AuthenticationConfigT&& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = std::forward<AuthenticationConfigT>(value); }
    template<typename AuthenticationConfigT = ReadAuthConfig>
    ActionConnector& WithAuthenticationConfig(AuthenticationConfigT&& value) { SetAuthenticationConfig(std::forward<AuthenticationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of actions that are enabled for this connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledActions() const { return m_enabledActions; }
    inline bool EnabledActionsHasBeenSet() const { return m_enabledActionsHasBeenSet; }
    template<typename EnabledActionsT = Aws::Vector<Aws::String>>
    void SetEnabledActions(EnabledActionsT&& value) { m_enabledActionsHasBeenSet = true; m_enabledActions = std::forward<EnabledActionsT>(value); }
    template<typename EnabledActionsT = Aws::Vector<Aws::String>>
    ActionConnector& WithEnabledActions(EnabledActionsT&& value) { SetEnabledActions(std::forward<EnabledActionsT>(value)); return *this;}
    template<typename EnabledActionsT = Aws::String>
    ActionConnector& AddEnabledActions(EnabledActionsT&& value) { m_enabledActionsHasBeenSet = true; m_enabledActions.emplace_back(std::forward<EnabledActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the VPC connection used for secure connectivity to the external
     * service.</p>
     */
    inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
    template<typename VpcConnectionArnT = Aws::String>
    void SetVpcConnectionArn(VpcConnectionArnT&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value); }
    template<typename VpcConnectionArnT = Aws::String>
    ActionConnector& WithVpcConnectionArn(VpcConnectionArnT&& value) { SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_actionConnectorId;
    bool m_actionConnectorIdHasBeenSet = false;

    ActionConnectorType m_type{ActionConnectorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ActionConnectorError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ReadAuthConfig m_authenticationConfig;
    bool m_authenticationConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledActions;
    bool m_enabledActionsHasBeenSet = false;

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
