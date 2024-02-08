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
    AWS_RDS_API RecommendedAction();
    AWS_RDS_API RecommendedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RecommendedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline RecommendedAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline RecommendedAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the recommended action.</p>
     */
    inline RecommendedAction& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A short description to summarize the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the action. The description might contain
     * markdown.</p>
     */
    inline RecommendedAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An API operation for the action.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>An API operation for the action.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>An API operation for the action.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>An API operation for the action.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>An API operation for the action.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>An API operation for the action.</p>
     */
    inline RecommendedAction& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>An API operation for the action.</p>
     */
    inline RecommendedAction& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>An API operation for the action.</p>
     */
    inline RecommendedAction& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The parameters for the API operation.</p>
     */
    inline const Aws::Vector<RecommendedActionParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline void SetParameters(const Aws::Vector<RecommendedActionParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline void SetParameters(Aws::Vector<RecommendedActionParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline RecommendedAction& WithParameters(const Aws::Vector<RecommendedActionParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline RecommendedAction& WithParameters(Aws::Vector<RecommendedActionParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline RecommendedAction& AddParameters(const RecommendedActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters for the API operation.</p>
     */
    inline RecommendedAction& AddParameters(RecommendedActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetApplyModes() const{ return m_applyModes; }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline bool ApplyModesHasBeenSet() const { return m_applyModesHasBeenSet; }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline void SetApplyModes(const Aws::Vector<Aws::String>& value) { m_applyModesHasBeenSet = true; m_applyModes = value; }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline void SetApplyModes(Aws::Vector<Aws::String>&& value) { m_applyModesHasBeenSet = true; m_applyModes = std::move(value); }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline RecommendedAction& WithApplyModes(const Aws::Vector<Aws::String>& value) { SetApplyModes(value); return *this;}

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline RecommendedAction& WithApplyModes(Aws::Vector<Aws::String>&& value) { SetApplyModes(std::move(value)); return *this;}

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline RecommendedAction& AddApplyModes(const Aws::String& value) { m_applyModesHasBeenSet = true; m_applyModes.push_back(value); return *this; }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline RecommendedAction& AddApplyModes(Aws::String&& value) { m_applyModesHasBeenSet = true; m_applyModes.push_back(std::move(value)); return *this; }

    /**
     * <p>The methods to apply the recommended action.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>manual</code> - The action requires you to resolve the
     * recommendation manually.</p> </li> <li> <p> <code>immediately</code> - The
     * action is applied immediately.</p> </li> <li> <p>
     * <code>next-maintainance-window</code> - The action is applied during the next
     * scheduled maintainance.</p> </li> </ul>
     */
    inline RecommendedAction& AddApplyModes(const char* value) { m_applyModesHasBeenSet = true; m_applyModes.push_back(value); return *this; }


    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline RecommendedAction& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline RecommendedAction& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the action.</p> <ul> <li> <p> <code>ready</code> </p> </li>
     * <li> <p> <code>applied</code> </p> </li> <li> <p> <code>scheduled</code> </p>
     * </li> <li> <p> <code>resolved</code> </p> </li> </ul>
     */
    inline RecommendedAction& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The details of the issue.</p>
     */
    inline const IssueDetails& GetIssueDetails() const{ return m_issueDetails; }

    /**
     * <p>The details of the issue.</p>
     */
    inline bool IssueDetailsHasBeenSet() const { return m_issueDetailsHasBeenSet; }

    /**
     * <p>The details of the issue.</p>
     */
    inline void SetIssueDetails(const IssueDetails& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = value; }

    /**
     * <p>The details of the issue.</p>
     */
    inline void SetIssueDetails(IssueDetails&& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = std::move(value); }

    /**
     * <p>The details of the issue.</p>
     */
    inline RecommendedAction& WithIssueDetails(const IssueDetails& value) { SetIssueDetails(value); return *this;}

    /**
     * <p>The details of the issue.</p>
     */
    inline RecommendedAction& WithIssueDetails(IssueDetails&& value) { SetIssueDetails(std::move(value)); return *this;}


    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline const Aws::Vector<ContextAttribute>& GetContextAttributes() const{ return m_contextAttributes; }

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline bool ContextAttributesHasBeenSet() const { return m_contextAttributesHasBeenSet; }

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline void SetContextAttributes(const Aws::Vector<ContextAttribute>& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = value; }

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline void SetContextAttributes(Aws::Vector<ContextAttribute>&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = std::move(value); }

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline RecommendedAction& WithContextAttributes(const Aws::Vector<ContextAttribute>& value) { SetContextAttributes(value); return *this;}

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline RecommendedAction& WithContextAttributes(Aws::Vector<ContextAttribute>&& value) { SetContextAttributes(std::move(value)); return *this;}

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline RecommendedAction& AddContextAttributes(const ContextAttribute& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.push_back(value); return *this; }

    /**
     * <p>The supporting attributes to explain the recommended action.</p>
     */
    inline RecommendedAction& AddContextAttributes(ContextAttribute&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.push_back(std::move(value)); return *this; }

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
