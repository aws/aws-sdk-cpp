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
    AWS_SAGEMAKEREDGEMANAGER_API Checksum();
    AWS_SAGEMAKEREDGEMANAGER_API Checksum(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Checksum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the checksum.</p>
     */
    inline const ChecksumType& GetType() const{ return m_type; }

    /**
     * <p>The type of the checksum.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the checksum.</p>
     */
    inline void SetType(const ChecksumType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the checksum.</p>
     */
    inline void SetType(ChecksumType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the checksum.</p>
     */
    inline Checksum& WithType(const ChecksumType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the checksum.</p>
     */
    inline Checksum& WithType(ChecksumType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The checksum of the model.</p>
     */
    inline const Aws::String& GetSum() const{ return m_sum; }

    /**
     * <p>The checksum of the model.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The checksum of the model.</p>
     */
    inline void SetSum(const Aws::String& value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The checksum of the model.</p>
     */
    inline void SetSum(Aws::String&& value) { m_sumHasBeenSet = true; m_sum = std::move(value); }

    /**
     * <p>The checksum of the model.</p>
     */
    inline void SetSum(const char* value) { m_sumHasBeenSet = true; m_sum.assign(value); }

    /**
     * <p>The checksum of the model.</p>
     */
    inline Checksum& WithSum(const Aws::String& value) { SetSum(value); return *this;}

    /**
     * <p>The checksum of the model.</p>
     */
    inline Checksum& WithSum(Aws::String&& value) { SetSum(std::move(value)); return *this;}

    /**
     * <p>The checksum of the model.</p>
     */
    inline Checksum& WithSum(const char* value) { SetSum(value); return *this;}

  private:

    ChecksumType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_sum;
    bool m_sumHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
