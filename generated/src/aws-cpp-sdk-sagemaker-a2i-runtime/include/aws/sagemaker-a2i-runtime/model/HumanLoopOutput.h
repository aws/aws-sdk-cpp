/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Information about where the human output will be stored.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopOutput">AWS
   * API Reference</a></p>
   */
  class HumanLoopOutput
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopOutput();
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline HumanLoopOutput& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline HumanLoopOutput& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output.</p>
     */
    inline HumanLoopOutput& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}

  private:

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
