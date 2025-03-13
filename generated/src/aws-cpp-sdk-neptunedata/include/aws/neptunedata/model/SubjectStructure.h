/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>A subject structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/SubjectStructure">AWS
   * API Reference</a></p>
   */
  class SubjectStructure
  {
  public:
    AWS_NEPTUNEDATA_API SubjectStructure() = default;
    AWS_NEPTUNEDATA_API SubjectStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API SubjectStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of occurrences of this specific structure.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline SubjectStructure& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicates present in this specific structure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPredicates() const { return m_predicates; }
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }
    template<typename PredicatesT = Aws::Vector<Aws::String>>
    void SetPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates = std::forward<PredicatesT>(value); }
    template<typename PredicatesT = Aws::Vector<Aws::String>>
    SubjectStructure& WithPredicates(PredicatesT&& value) { SetPredicates(std::forward<PredicatesT>(value)); return *this;}
    template<typename PredicatesT = Aws::String>
    SubjectStructure& AddPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates.emplace_back(std::forward<PredicatesT>(value)); return *this; }
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_predicates;
    bool m_predicatesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
