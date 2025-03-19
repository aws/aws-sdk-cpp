/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationDesiredState.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationCurrentState.h>
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
   * <p>Container for parameters representing the state of the natural language query
   * generation feature on the specified domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NaturalLanguageQueryGenerationOptionsOutput">AWS
   * API Reference</a></p>
   */
  class NaturalLanguageQueryGenerationOptionsOutput
  {
  public:
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsOutput() = default;
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired state of the natural language query generation feature. Valid
     * values are ENABLED and DISABLED.</p>
     */
    inline NaturalLanguageQueryGenerationDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(NaturalLanguageQueryGenerationDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline NaturalLanguageQueryGenerationOptionsOutput& WithDesiredState(NaturalLanguageQueryGenerationDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the natural language query generation feature,
     * indicating completion, in progress, or failure.</p>
     */
    inline NaturalLanguageQueryGenerationCurrentState GetCurrentState() const { return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(NaturalLanguageQueryGenerationCurrentState value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline NaturalLanguageQueryGenerationOptionsOutput& WithCurrentState(NaturalLanguageQueryGenerationCurrentState value) { SetCurrentState(value); return *this;}
    ///@}
  private:

    NaturalLanguageQueryGenerationDesiredState m_desiredState{NaturalLanguageQueryGenerationDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    NaturalLanguageQueryGenerationCurrentState m_currentState{NaturalLanguageQueryGenerationCurrentState::NOT_SET};
    bool m_currentStateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
