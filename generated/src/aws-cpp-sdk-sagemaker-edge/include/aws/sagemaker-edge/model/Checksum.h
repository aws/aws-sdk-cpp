/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/model/ChecksumType.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p>Information about the checksum of a model deployed on a device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/Checksum">AWS
   * API Reference</a></p>
   */
  class Checksum
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API Checksum() = default;
    AWS_SAGEMAKEREDGEMANAGER_API Checksum(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Checksum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the checksum.</p>
     */
    inline ChecksumType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChecksumType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Checksum& WithType(ChecksumType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum of the model.</p>
     */
    inline const Aws::String& GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    template<typename SumT = Aws::String>
    void SetSum(SumT&& value) { m_sumHasBeenSet = true; m_sum = std::forward<SumT>(value); }
    template<typename SumT = Aws::String>
    Checksum& WithSum(SumT&& value) { SetSum(std::forward<SumT>(value)); return *this;}
    ///@}
  private:

    ChecksumType m_type{ChecksumType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_sum;
    bool m_sumHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
