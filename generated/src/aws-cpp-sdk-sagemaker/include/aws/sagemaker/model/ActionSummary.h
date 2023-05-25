/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSource.h>
#include <aws/sagemaker/model/ActionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Lists the properties of an <i>action</i>. An action represents an action or
   * activity. Some examples are a workflow step and a model deployment. Generally,
   * an action involves at least one input artifact or output artifact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ActionSummary">AWS
   * API Reference</a></p>
   */
  class ActionSummary
  {
  public:
    AWS_SAGEMAKER_API ActionSummary();
    AWS_SAGEMAKER_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline bool ActionArnHasBeenSet() const { return m_actionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArnHasBeenSet = true; m_actionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArnHasBeenSet = true; m_actionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArnHasBeenSet = true; m_actionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline ActionSummary& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline ActionSummary& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline ActionSummary& WithActionArn(const char* value) { SetActionArn(value); return *this;}


    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline ActionSummary& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionSummary& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionSummary& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The source of the action.</p>
     */
    inline const ActionSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the action.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the action.</p>
     */
    inline void SetSource(const ActionSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the action.</p>
     */
    inline void SetSource(ActionSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the action.</p>
     */
    inline ActionSummary& WithSource(const ActionSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the action.</p>
     */
    inline ActionSummary& WithSource(ActionSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of the action.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of the action.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * <p>The type of the action.</p>
     */
    inline ActionSummary& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of the action.</p>
     */
    inline ActionSummary& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>The type of the action.</p>
     */
    inline ActionSummary& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline ActionSummary& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline ActionSummary& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the action was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the action was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the action was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the action was created.</p>
     */
    inline ActionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the action was created.</p>
     */
    inline ActionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the action was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the action was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the action was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the action was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the action was last modified.</p>
     */
    inline ActionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the action was last modified.</p>
     */
    inline ActionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_actionArn;
    bool m_actionArnHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ActionSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
