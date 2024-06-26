/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationOptionsInput.h>
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
   * <p>Container for parameters required to enable all machine learning
   * features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AIMLOptionsInput">AWS
   * API Reference</a></p>
   */
  class AIMLOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AIMLOptionsInput();
    AWS_OPENSEARCHSERVICE_API AIMLOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AIMLOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Container for parameters required for natural language query generation on
     * the specified domain.</p>
     */
    inline const NaturalLanguageQueryGenerationOptionsInput& GetNaturalLanguageQueryGenerationOptions() const{ return m_naturalLanguageQueryGenerationOptions; }
    inline bool NaturalLanguageQueryGenerationOptionsHasBeenSet() const { return m_naturalLanguageQueryGenerationOptionsHasBeenSet; }
    inline void SetNaturalLanguageQueryGenerationOptions(const NaturalLanguageQueryGenerationOptionsInput& value) { m_naturalLanguageQueryGenerationOptionsHasBeenSet = true; m_naturalLanguageQueryGenerationOptions = value; }
    inline void SetNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsInput&& value) { m_naturalLanguageQueryGenerationOptionsHasBeenSet = true; m_naturalLanguageQueryGenerationOptions = std::move(value); }
    inline AIMLOptionsInput& WithNaturalLanguageQueryGenerationOptions(const NaturalLanguageQueryGenerationOptionsInput& value) { SetNaturalLanguageQueryGenerationOptions(value); return *this;}
    inline AIMLOptionsInput& WithNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsInput&& value) { SetNaturalLanguageQueryGenerationOptions(std::move(value)); return *this;}
    ///@}
  private:

    NaturalLanguageQueryGenerationOptionsInput m_naturalLanguageQueryGenerationOptions;
    bool m_naturalLanguageQueryGenerationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
