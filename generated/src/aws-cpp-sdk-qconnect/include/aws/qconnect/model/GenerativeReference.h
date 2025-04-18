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
    AWS_QCONNECT_API GenerativeReference() = default;
    AWS_QCONNECT_API GenerativeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the LLM model. </p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    GenerativeReference& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the LLM model. </p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    GenerativeReference& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
