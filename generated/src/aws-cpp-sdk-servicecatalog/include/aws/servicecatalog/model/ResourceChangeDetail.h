/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ResourceTargetDefinition.h>
#include <aws/servicecatalog/model/EvaluationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a change to a resource attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceChangeDetail">AWS
   * API Reference</a></p>
   */
  class ResourceChangeDetail
  {
  public:
    AWS_SERVICECATALOG_API ResourceChangeDetail() = default;
    AWS_SERVICECATALOG_API ResourceChangeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceChangeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline const ResourceTargetDefinition& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = ResourceTargetDefinition>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = ResourceTargetDefinition>
    ResourceChangeDetail& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline EvaluationType GetEvaluation() const { return m_evaluation; }
    inline bool EvaluationHasBeenSet() const { return m_evaluationHasBeenSet; }
    inline void SetEvaluation(EvaluationType value) { m_evaluationHasBeenSet = true; m_evaluation = value; }
    inline ResourceChangeDetail& WithEvaluation(EvaluationType value) { SetEvaluation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline const Aws::String& GetCausingEntity() const { return m_causingEntity; }
    inline bool CausingEntityHasBeenSet() const { return m_causingEntityHasBeenSet; }
    template<typename CausingEntityT = Aws::String>
    void SetCausingEntity(CausingEntityT&& value) { m_causingEntityHasBeenSet = true; m_causingEntity = std::forward<CausingEntityT>(value); }
    template<typename CausingEntityT = Aws::String>
    ResourceChangeDetail& WithCausingEntity(CausingEntityT&& value) { SetCausingEntity(std::forward<CausingEntityT>(value)); return *this;}
    ///@}
  private:

    ResourceTargetDefinition m_target;
    bool m_targetHasBeenSet = false;

    EvaluationType m_evaluation{EvaluationType::NOT_SET};
    bool m_evaluationHasBeenSet = false;

    Aws::String m_causingEntity;
    bool m_causingEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
