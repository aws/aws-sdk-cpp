/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/IssueDetails.h>
#include <aws/rds/model/RecommendedActionParameter.h>
#include <aws/rds/model/ContextAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The recommended actions to apply to resolve the issues associated with your
   * DB instances, DB clusters, and DB parameter groups.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RecommendedAction">AWS
   * API Reference</a></p>
   */
  class RecommendedAction
  {
  public:
    AWS_RDS_API RecommendedAction() = default;
    AWS_RDS_API RecommendedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RecommendedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    RecommendedAction& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    RecommendedAction& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RecommendedAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An API operation for the action.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    RecommendedAction& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the API operation.</p>
     */
    inline const Aws::Vector<RecommendedActionParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<RecommendedActionParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<RecommendedActionParameter>>
    RecommendedAction& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = RecommendedActionParameter>
    RecommendedAction& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetApplyModes() const { return m_applyModes; }
    inline bool ApplyModesHasBeenSet() const { return m_applyModesHasBeenSet; }
    template<typename ApplyModesT = Aws::Vector<Aws::String>>
    void SetApplyModes(ApplyModesT&& value) { m_applyModesHasBeenSet = true; m_applyModes = std::forward<ApplyModesT>(value); }
    template<typename ApplyModesT = Aws::Vector<Aws::String>>
    RecommendedAction& WithApplyModes(ApplyModesT&& value) { SetApplyModes(std::forward<ApplyModesT>(value)); return *this;}
    template<typename ApplyModesT = Aws::String>
    RecommendedAction& AddApplyModes(ApplyModesT&& value) { m_applyModesHasBeenSet = true; m_applyModes.emplace_back(std::forward<ApplyModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    RecommendedAction& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the issue.</p>
     */
    inline const IssueDetails& GetIssueDetails() const { return m_issueDetails; }
    inline bool IssueDetailsHasBeenSet() const { return m_issueDetailsHasBeenSet; }
    template<typename IssueDetailsT = IssueDetails>
    void SetIssueDetails(IssueDetailsT&& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = std::forward<IssueDetailsT>(value); }
    template<typename IssueDetailsT = IssueDetails>
    RecommendedAction& WithIssueDetails(IssueDetailsT&& value) { SetIssueDetails(std::forward<IssueDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline const Aws::Vector<ContextAttribute>& GetContextAttributes() const { return m_contextAttributes; }
    inline bool ContextAttributesHasBeenSet() const { return m_contextAttributesHasBeenSet; }
    template<typename ContextAttributesT = Aws::Vector<ContextAttribute>>
    void SetContextAttributes(ContextAttributesT&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = std::forward<ContextAttributesT>(value); }
    template<typename ContextAttributesT = Aws::Vector<ContextAttribute>>
    RecommendedAction& WithContextAttributes(ContextAttributesT&& value) { SetContextAttributes(std::forward<ContextAttributesT>(value)); return *this;}
    template<typename ContextAttributesT = ContextAttribute>
    RecommendedAction& AddContextAttributes(ContextAttributesT&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace_back(std::forward<ContextAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Vector<RecommendedActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_applyModes;
    bool m_applyModesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    IssueDetails m_issueDetails;
    bool m_issueDetailsHasBeenSet = false;

    Aws::Vector<ContextAttribute> m_contextAttributes;
    bool m_contextAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
