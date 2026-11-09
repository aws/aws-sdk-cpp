/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/QuadsInfo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {

/**
 * <p>Contains storage information about quad indexes for both RDF and Property
 * Graph data models.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/QuadsIndexesInfo">AWS
 * API Reference</a></p>
 */
class QuadsIndexesInfo {
 public:
  AWS_NEPTUNEDATA_API QuadsIndexesInfo() = default;
  AWS_NEPTUNEDATA_API QuadsIndexesInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API QuadsIndexesInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains quad index information for the RDF (SPARQL) data model.</p>
   */
  inline const QuadsInfo& GetRDF() const { return m_rDF; }
  inline bool RDFHasBeenSet() const { return m_rDFHasBeenSet; }
  template <typename RDFT = QuadsInfo>
  void SetRDF(RDFT&& value) {
    m_rDFHasBeenSet = true;
    m_rDF = std::forward<RDFT>(value);
  }
  template <typename RDFT = QuadsInfo>
  QuadsIndexesInfo& WithRDF(RDFT&& value) {
    SetRDF(std::forward<RDFT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains quad index information for the Property Graph (Gremlin/openCypher)
   * data model.</p>
   */
  inline const QuadsInfo& GetPG() const { return m_pG; }
  inline bool PGHasBeenSet() const { return m_pGHasBeenSet; }
  template <typename PGT = QuadsInfo>
  void SetPG(PGT&& value) {
    m_pGHasBeenSet = true;
    m_pG = std::forward<PGT>(value);
  }
  template <typename PGT = QuadsInfo>
  QuadsIndexesInfo& WithPG(PGT&& value) {
    SetPG(std::forward<PGT>(value));
    return *this;
  }
  ///@}
 private:
  QuadsInfo m_rDF;

  QuadsInfo m_pG;
  bool m_rDFHasBeenSet = false;
  bool m_pGHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
