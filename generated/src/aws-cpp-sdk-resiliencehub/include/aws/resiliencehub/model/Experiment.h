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
    AWS_RESILIENCEHUB_API Experiment();
    AWS_RESILIENCEHUB_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the FIS experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }
    inline bool ExperimentArnHasBeenSet() const { return m_experimentArnHasBeenSet; }
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArnHasBeenSet = true; m_experimentArn = value; }
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArnHasBeenSet = true; m_experimentArn = std::move(value); }
    inline void SetExperimentArn(const char* value) { m_experimentArnHasBeenSet = true; m_experimentArn.assign(value); }
    inline Experiment& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}
    inline Experiment& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}
    inline Experiment& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the FIS experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const{ return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    inline void SetExperimentTemplateId(const Aws::String& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = value; }
    inline void SetExperimentTemplateId(Aws::String&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::move(value); }
    inline void SetExperimentTemplateId(const char* value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId.assign(value); }
    inline Experiment& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}
    inline Experiment& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}
    inline Experiment& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}
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
