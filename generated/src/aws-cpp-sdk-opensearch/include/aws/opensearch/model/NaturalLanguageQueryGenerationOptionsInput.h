/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationDesiredState.h>
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
   * <p>Container for parameters required to enable the natural language query
   * generation feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NaturalLanguageQueryGenerationOptionsInput">AWS
   * API Reference</a></p>
   */
  class NaturalLanguageQueryGenerationOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired state of the natural language query generation feature. Valid
     * values are ENABLED and DISABLED.</p>
     */
    inline NaturalLanguageQueryGenerationDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(NaturalLanguageQueryGenerationDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline NaturalLanguageQueryGenerationOptionsInput& WithDesiredState(NaturalLanguageQueryGenerationDesiredState value) { SetDesiredState(value); return *this;}
    ///@}
  private:

    NaturalLanguageQueryGenerationDesiredState m_desiredState{NaturalLanguageQueryGenerationDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
