/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/AccountAttribute.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{
  class DescribeAccountAttributesResult
  {
  public:
    AWS_OPSWORKSCM_API DescribeAccountAttributesResult();
    AWS_OPSWORKSCM_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline void SetAttributes(const Aws::Vector<AccountAttribute>& value) { m_attributes = value; }

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline void SetAttributes(Aws::Vector<AccountAttribute>&& value) { m_attributes = std::move(value); }

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline DescribeAccountAttributesResult& WithAttributes(const Aws::Vector<AccountAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline DescribeAccountAttributesResult& WithAttributes(Aws::Vector<AccountAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline DescribeAccountAttributesResult& AddAttributes(const AccountAttribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p> The attributes that are currently set for the account. </p>
     */
    inline DescribeAccountAttributesResult& AddAttributes(AccountAttribute&& value) { m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccountAttribute> m_attributes;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
