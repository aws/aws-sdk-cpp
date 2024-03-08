/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Reference information about generative content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GenerativeReference">AWS
   * API Reference</a></p>
   */
  class GenerativeReference
  {
  public:
    AWS_QCONNECT_API GenerativeReference();
    AWS_QCONNECT_API GenerativeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}


    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline GenerativeReference& WithModelId(const char* value) { SetModelId(value); return *this;}

  private:

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
