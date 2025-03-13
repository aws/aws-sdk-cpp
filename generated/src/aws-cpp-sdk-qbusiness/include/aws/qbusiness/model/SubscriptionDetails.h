/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/SubscriptionType.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p> The details of an Amazon Q Business subscription. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SubscriptionDetails">AWS
   * API Reference</a></p>
   */
  class SubscriptionDetails
  {
  public:
    AWS_QBUSINESS_API SubscriptionDetails() = default;
    AWS_QBUSINESS_API SubscriptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SubscriptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of an Amazon Q Business subscription. </p>
     */
    inline SubscriptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SubscriptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SubscriptionDetails& WithType(SubscriptionType value) { SetType(value); return *this;}
    ///@}
  private:

    SubscriptionType m_type{SubscriptionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
