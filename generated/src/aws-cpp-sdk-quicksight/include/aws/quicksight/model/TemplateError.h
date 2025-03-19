/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TemplateErrorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Entity.h>
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
   * <p>List of errors that occurred when the template version creation
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateError">AWS
   * API Reference</a></p>
   */
  class TemplateError
  {
  public:
    AWS_QUICKSIGHT_API TemplateError() = default;
    AWS_QUICKSIGHT_API TemplateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of error.</p>
     */
    inline TemplateErrorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TemplateErrorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TemplateError& WithType(TemplateErrorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the error type.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TemplateError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error path that shows which entities caused the template error.</p>
     */
    inline const Aws::Vector<Entity>& GetViolatedEntities() const { return m_violatedEntities; }
    inline bool ViolatedEntitiesHasBeenSet() const { return m_violatedEntitiesHasBeenSet; }
    template<typename ViolatedEntitiesT = Aws::Vector<Entity>>
    void SetViolatedEntities(ViolatedEntitiesT&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = std::forward<ViolatedEntitiesT>(value); }
    template<typename ViolatedEntitiesT = Aws::Vector<Entity>>
    TemplateError& WithViolatedEntities(ViolatedEntitiesT&& value) { SetViolatedEntities(std::forward<ViolatedEntitiesT>(value)); return *this;}
    template<typename ViolatedEntitiesT = Entity>
    TemplateError& AddViolatedEntities(ViolatedEntitiesT&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.emplace_back(std::forward<ViolatedEntitiesT>(value)); return *this; }
    ///@}
  private:

    TemplateErrorType m_type{TemplateErrorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Entity> m_violatedEntities;
    bool m_violatedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
