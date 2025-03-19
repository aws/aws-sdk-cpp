/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSource.h>
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
   * <p>Lists a summary of the properties of a context. A context provides a logical
   * grouping of other entities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContextSummary">AWS
   * API Reference</a></p>
   */
  class ContextSummary
  {
  public:
    AWS_SAGEMAKER_API ContextSummary() = default;
    AWS_SAGEMAKER_API ContextSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContextSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline const Aws::String& GetContextArn() const { return m_contextArn; }
    inline bool ContextArnHasBeenSet() const { return m_contextArnHasBeenSet; }
    template<typename ContextArnT = Aws::String>
    void SetContextArn(ContextArnT&& value) { m_contextArnHasBeenSet = true; m_contextArn = std::forward<ContextArnT>(value); }
    template<typename ContextArnT = Aws::String>
    ContextSummary& WithContextArn(ContextArnT&& value) { SetContextArn(std::forward<ContextArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetContextName() const { return m_contextName; }
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }
    template<typename ContextNameT = Aws::String>
    void SetContextName(ContextNameT&& value) { m_contextNameHasBeenSet = true; m_contextName = std::forward<ContextNameT>(value); }
    template<typename ContextNameT = Aws::String>
    ContextSummary& WithContextName(ContextNameT&& value) { SetContextName(std::forward<ContextNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the context.</p>
     */
    inline const ContextSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ContextSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ContextSource>
    ContextSummary& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the context.</p>
     */
    inline const Aws::String& GetContextType() const { return m_contextType; }
    inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
    template<typename ContextTypeT = Aws::String>
    void SetContextType(ContextTypeT&& value) { m_contextTypeHasBeenSet = true; m_contextType = std::forward<ContextTypeT>(value); }
    template<typename ContextTypeT = Aws::String>
    ContextSummary& WithContextType(ContextTypeT&& value) { SetContextType(std::forward<ContextTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the context was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ContextSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the context was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ContextSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contextArn;
    bool m_contextArnHasBeenSet = false;

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;

    ContextSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_contextType;
    bool m_contextTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
