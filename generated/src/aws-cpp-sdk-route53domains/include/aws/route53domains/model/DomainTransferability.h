/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/Transferable.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>A complex type that contains information about whether the specified domain
   * can be transferred to Route 53.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainTransferability">AWS
   * API Reference</a></p>
   */
  class DomainTransferability
  {
  public:
    AWS_ROUTE53DOMAINS_API DomainTransferability() = default;
    AWS_ROUTE53DOMAINS_API DomainTransferability(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DomainTransferability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline Transferable GetTransferable() const { return m_transferable; }
    inline bool TransferableHasBeenSet() const { return m_transferableHasBeenSet; }
    inline void SetTransferable(Transferable value) { m_transferableHasBeenSet = true; m_transferable = value; }
    inline DomainTransferability& WithTransferable(Transferable value) { SetTransferable(value); return *this;}
    ///@}
  private:

    Transferable m_transferable{Transferable::NOT_SET};
    bool m_transferableHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
