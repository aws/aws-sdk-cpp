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
    AWS_SAGEMAKER_API ContextSummary();
    AWS_SAGEMAKER_API ContextSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContextSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline const Aws::String& GetContextArn() const{ return m_contextArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline bool ContextArnHasBeenSet() const { return m_contextArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline void SetContextArn(const Aws::String& value) { m_contextArnHasBeenSet = true; m_contextArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline void SetContextArn(Aws::String&& value) { m_contextArnHasBeenSet = true; m_contextArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline void SetContextArn(const char* value) { m_contextArnHasBeenSet = true; m_contextArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline ContextSummary& WithContextArn(const Aws::String& value) { SetContextArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline ContextSummary& WithContextArn(Aws::String&& value) { SetContextArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline ContextSummary& WithContextArn(const char* value) { SetContextArn(value); return *this;}


    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }

    /**
     * <p>The name of the context.</p>
     */
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetContextName(const Aws::String& value) { m_contextNameHasBeenSet = true; m_contextName = value; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetContextName(Aws::String&& value) { m_contextNameHasBeenSet = true; m_contextName = std::move(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetContextName(const char* value) { m_contextNameHasBeenSet = true; m_contextName.assign(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline ContextSummary& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline ContextSummary& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline ContextSummary& WithContextName(const char* value) { SetContextName(value); return *this;}


    /**
     * <p>The source of the context.</p>
     */
    inline const ContextSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the context.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the context.</p>
     */
    inline void SetSource(const ContextSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the context.</p>
     */
    inline void SetSource(ContextSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the context.</p>
     */
    inline ContextSummary& WithSource(const ContextSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the context.</p>
     */
    inline ContextSummary& WithSource(ContextSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of the context.</p>
     */
    inline const Aws::String& GetContextType() const{ return m_contextType; }

    /**
     * <p>The type of the context.</p>
     */
    inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }

    /**
     * <p>The type of the context.</p>
     */
    inline void SetContextType(const Aws::String& value) { m_contextTypeHasBeenSet = true; m_contextType = value; }

    /**
     * <p>The type of the context.</p>
     */
    inline void SetContextType(Aws::String&& value) { m_contextTypeHasBeenSet = true; m_contextType = std::move(value); }

    /**
     * <p>The type of the context.</p>
     */
    inline void SetContextType(const char* value) { m_contextTypeHasBeenSet = true; m_contextType.assign(value); }

    /**
     * <p>The type of the context.</p>
     */
    inline ContextSummary& WithContextType(const Aws::String& value) { SetContextType(value); return *this;}

    /**
     * <p>The type of the context.</p>
     */
    inline ContextSummary& WithContextType(Aws::String&& value) { SetContextType(std::move(value)); return *this;}

    /**
     * <p>The type of the context.</p>
     */
    inline ContextSummary& WithContextType(const char* value) { SetContextType(value); return *this;}


    /**
     * <p>When the context was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the context was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the context was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the context was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the context was created.</p>
     */
    inline ContextSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the context was created.</p>
     */
    inline ContextSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the context was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the context was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the context was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the context was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the context was last modified.</p>
     */
    inline ContextSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the context was last modified.</p>
     */
    inline ContextSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_contextArn;
    bool m_contextArnHasBeenSet = false;

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;

    ContextSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_contextType;
    bool m_contextTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
