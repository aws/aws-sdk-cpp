/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon Resource Name (ARN) and job type of the source of a trial
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentSource">AWS
   * API Reference</a></p>
   */
  class TrialComponentSource
  {
  public:
    AWS_SAGEMAKER_API TrialComponentSource();
    AWS_SAGEMAKER_API TrialComponentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline TrialComponentSource& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline TrialComponentSource& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The source Amazon Resource Name (ARN).</p>
     */
    inline TrialComponentSource& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The source job type.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source job type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source job type.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source job type.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source job type.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source job type.</p>
     */
    inline TrialComponentSource& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source job type.</p>
     */
    inline TrialComponentSource& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source job type.</p>
     */
    inline TrialComponentSource& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
