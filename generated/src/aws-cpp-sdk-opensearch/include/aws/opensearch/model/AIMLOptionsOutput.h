/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationOptionsOutput.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for parameters representing the state of machine learning features
   * on the specified domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AIMLOptionsOutput">AWS
   * API Reference</a></p>
   */
  class AIMLOptionsOutput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AIMLOptionsOutput() = default;
    AWS_OPENSEARCHSERVICE_API AIMLOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AIMLOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Container for parameters required for natural language query generation on
     * the specified domain.</p>
     */
    inline const NaturalLanguageQueryGenerationOptionsOutput& GetNaturalLanguageQueryGenerationOptions() const { return m_naturalLanguageQueryGenerationOptions; }
    inline bool NaturalLanguageQueryGenerationOptionsHasBeenSet() const { return m_naturalLanguageQueryGenerationOptionsHasBeenSet; }
    template<typename NaturalLanguageQueryGenerationOptionsT = NaturalLanguageQueryGenerationOptionsOutput>
    void SetNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsT&& value) { m_naturalLanguageQueryGenerationOptionsHasBeenSet = true; m_naturalLanguageQueryGenerationOptions = std::forward<NaturalLanguageQueryGenerationOptionsT>(value); }
    template<typename NaturalLanguageQueryGenerationOptionsT = NaturalLanguageQueryGenerationOptionsOutput>
    AIMLOptionsOutput& WithNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsT&& value) { SetNaturalLanguageQueryGenerationOptions(std::forward<NaturalLanguageQueryGenerationOptionsT>(value)); return *this;}
    ///@}
  private:

    NaturalLanguageQueryGenerationOptionsOutput m_naturalLanguageQueryGenerationOptions;
    bool m_naturalLanguageQueryGenerationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
