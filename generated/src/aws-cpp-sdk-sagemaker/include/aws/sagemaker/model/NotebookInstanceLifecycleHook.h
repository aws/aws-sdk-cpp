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
   * <p>Contains the notebook instance lifecycle configuration script.</p> <p>Each
   * lifecycle configuration script has a limit of 16384 characters.</p> <p>The value
   * of the <code>$PATH</code> environment variable that is available to both scripts
   * is <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
   * notebook instance lifecycle configurations in log group
   * <code>/aws/sagemaker/NotebookInstances</code> in log stream
   * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
   * configuration scripts cannot run for longer than 5 minutes. If a script runs for
   * longer than 5 minutes, it fails and the notebook instance is not created or
   * started.</p> <p>For information about notebook instance lifestyle
   * configurations, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
   * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceLifecycleHook">AWS
   * API Reference</a></p>
   */
  class NotebookInstanceLifecycleHook
  {
  public:
    AWS_SAGEMAKER_API NotebookInstanceLifecycleHook();
    AWS_SAGEMAKER_API NotebookInstanceLifecycleHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NotebookInstanceLifecycleHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleHook& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleHook& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>A base64-encoded string that contains a shell script for a notebook instance
     * lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleHook& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
