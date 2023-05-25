/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>

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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Specifies a request to start a transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/StartTransactionRequest">AWS
   * API Reference</a></p>
   */
  class StartTransactionRequest
  {
  public:
    AWS_QLDBSESSION_API StartTransactionRequest();
    AWS_QLDBSESSION_API StartTransactionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API StartTransactionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
