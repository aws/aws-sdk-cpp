/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ManagedResourceStatus.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The configuration for Zero-ETL access from the ODB network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ZeroEtlAccess">AWS
   * API Reference</a></p>
   */
  class ZeroEtlAccess
  {
  public:
    AWS_ODB_API ZeroEtlAccess() = default;
    AWS_ODB_API ZeroEtlAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API ZeroEtlAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the Zero-ETL access.</p> <p>Valid Values: <code>enabled |
     * disabled</code> </p>
     */
    inline ManagedResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ZeroEtlAccess& WithStatus(ManagedResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR block for the Zero-ETL access.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    ZeroEtlAccess& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}
  private:

    ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
