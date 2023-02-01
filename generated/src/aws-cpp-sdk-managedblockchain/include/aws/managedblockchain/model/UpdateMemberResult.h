/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>

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
namespace ManagedBlockchain
{
namespace Model
{
  class UpdateMemberResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API UpdateMemberResult();
    AWS_MANAGEDBLOCKCHAIN_API UpdateMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API UpdateMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
