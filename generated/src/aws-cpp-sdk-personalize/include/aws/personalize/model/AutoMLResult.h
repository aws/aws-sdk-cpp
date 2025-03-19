/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>When the solution performs AutoML (<code>performAutoML</code> is true in <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>),
   * specifies the recipe that best optimized the specified metric.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AutoMLResult">AWS
   * API Reference</a></p>
   */
  class AutoMLResult
  {
  public:
    AWS_PERSONALIZE_API AutoMLResult() = default;
    AWS_PERSONALIZE_API AutoMLResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API AutoMLResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline const Aws::String& GetBestRecipeArn() const { return m_bestRecipeArn; }
    inline bool BestRecipeArnHasBeenSet() const { return m_bestRecipeArnHasBeenSet; }
    template<typename BestRecipeArnT = Aws::String>
    void SetBestRecipeArn(BestRecipeArnT&& value) { m_bestRecipeArnHasBeenSet = true; m_bestRecipeArn = std::forward<BestRecipeArnT>(value); }
    template<typename BestRecipeArnT = Aws::String>
    AutoMLResult& WithBestRecipeArn(BestRecipeArnT&& value) { SetBestRecipeArn(std::forward<BestRecipeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bestRecipeArn;
    bool m_bestRecipeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
