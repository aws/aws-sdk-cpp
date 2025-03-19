/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the FIS experiment detected while running an
   * assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Experiment">AWS
   * API Reference</a></p>
   */
  class Experiment
  {
  public:
    AWS_RESILIENCEHUB_API Experiment() = default;
    AWS_RESILIENCEHUB_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the FIS experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const { return m_experimentArn; }
    inline bool ExperimentArnHasBeenSet() const { return m_experimentArnHasBeenSet; }
    template<typename ExperimentArnT = Aws::String>
    void SetExperimentArn(ExperimentArnT&& value) { m_experimentArnHasBeenSet = true; m_experimentArn = std::forward<ExperimentArnT>(value); }
    template<typename ExperimentArnT = Aws::String>
    Experiment& WithExperimentArn(ExperimentArnT&& value) { SetExperimentArn(std::forward<ExperimentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the FIS experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const { return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    template<typename ExperimentTemplateIdT = Aws::String>
    void SetExperimentTemplateId(ExperimentTemplateIdT&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::forward<ExperimentTemplateIdT>(value); }
    template<typename ExperimentTemplateIdT = Aws::String>
    Experiment& WithExperimentTemplateId(ExperimentTemplateIdT&& value) { SetExperimentTemplateId(std::forward<ExperimentTemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_experimentArn;
    bool m_experimentArnHasBeenSet = false;

    Aws::String m_experimentTemplateId;
    bool m_experimentTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
