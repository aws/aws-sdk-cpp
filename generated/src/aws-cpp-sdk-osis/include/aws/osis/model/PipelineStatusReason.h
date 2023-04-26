/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Information about a pipeline's current status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineStatusReason">AWS
   * API Reference</a></p>
   */
  class PipelineStatusReason
  {
  public:
    AWS_OSIS_API PipelineStatusReason();
    AWS_OSIS_API PipelineStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline PipelineStatusReason& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline PipelineStatusReason& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of why a pipeline has a certain status.</p>
     */
    inline PipelineStatusReason& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
