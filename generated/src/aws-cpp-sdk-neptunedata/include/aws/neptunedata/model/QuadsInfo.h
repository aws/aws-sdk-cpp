/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/StorageMetrics.h>

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
 * <p>Contains storage information about quad indexes.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/QuadsInfo">AWS
 * API Reference</a></p>
 */
class QuadsInfo {
 public:
  AWS_NEPTUNEDATA_API QuadsInfo() = default;
  AWS_NEPTUNEDATA_API QuadsInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API QuadsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Size and count information for the SPOG quad index.</p>
   */
  inline const StorageMetrics& GetSPOG() const { return m_sPOG; }
  inline bool SPOGHasBeenSet() const { return m_sPOGHasBeenSet; }
  template <typename SPOGT = StorageMetrics>
  void SetSPOG(SPOGT&& value) {
    m_sPOGHasBeenSet = true;
    m_sPOG = std::forward<SPOGT>(value);
  }
  template <typename SPOGT = StorageMetrics>
  QuadsInfo& WithSPOG(SPOGT&& value) {
    SetSPOG(std::forward<SPOGT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size and count information for the POGS quad index.</p>
   */
  inline const StorageMetrics& GetPOGS() const { return m_pOGS; }
  inline bool POGSHasBeenSet() const { return m_pOGSHasBeenSet; }
  template <typename POGST = StorageMetrics>
  void SetPOGS(POGST&& value) {
    m_pOGSHasBeenSet = true;
    m_pOGS = std::forward<POGST>(value);
  }
  template <typename POGST = StorageMetrics>
  QuadsInfo& WithPOGS(POGST&& value) {
    SetPOGS(std::forward<POGST>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size and count information for the GPSO quad index.</p>
   */
  inline const StorageMetrics& GetGPSO() const { return m_gPSO; }
  inline bool GPSOHasBeenSet() const { return m_gPSOHasBeenSet; }
  template <typename GPSOT = StorageMetrics>
  void SetGPSO(GPSOT&& value) {
    m_gPSOHasBeenSet = true;
    m_gPSO = std::forward<GPSOT>(value);
  }
  template <typename GPSOT = StorageMetrics>
  QuadsInfo& WithGPSO(GPSOT&& value) {
    SetGPSO(std::forward<GPSOT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size and count information for the OSGP quad index. This index is optional.
   * For details on how to enable it and evaluate the benefits and costs, see <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/feature-overview-data-model.html">Neptune
   * Data Model</a>.</p>
   */
  inline const StorageMetrics& GetOSGP() const { return m_oSGP; }
  inline bool OSGPHasBeenSet() const { return m_oSGPHasBeenSet; }
  template <typename OSGPT = StorageMetrics>
  void SetOSGP(OSGPT&& value) {
    m_oSGPHasBeenSet = true;
    m_oSGP = std::forward<OSGPT>(value);
  }
  template <typename OSGPT = StorageMetrics>
  QuadsInfo& WithOSGP(OSGPT&& value) {
    SetOSGP(std::forward<OSGPT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size and count information for the PZSOG quad index.</p>
   */
  inline const StorageMetrics& GetPZSOG() const { return m_pZSOG; }
  inline bool PZSOGHasBeenSet() const { return m_pZSOGHasBeenSet; }
  template <typename PZSOGT = StorageMetrics>
  void SetPZSOG(PZSOGT&& value) {
    m_pZSOGHasBeenSet = true;
    m_pZSOG = std::forward<PZSOGT>(value);
  }
  template <typename PZSOGT = StorageMetrics>
  QuadsInfo& WithPZSOG(PZSOGT&& value) {
    SetPZSOG(std::forward<PZSOGT>(value));
    return *this;
  }
  ///@}
 private:
  StorageMetrics m_sPOG;

  StorageMetrics m_pOGS;

  StorageMetrics m_gPSO;

  StorageMetrics m_oSGP;

  StorageMetrics m_pZSOG;
  bool m_sPOGHasBeenSet = false;
  bool m_pOGSHasBeenSet = false;
  bool m_gPSOHasBeenSet = false;
  bool m_oSGPHasBeenSet = false;
  bool m_pZSOGHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
