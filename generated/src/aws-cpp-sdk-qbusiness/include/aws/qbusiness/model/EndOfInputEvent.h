/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>

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
   * <p>The end of the streaming input for the <code>Chat</code> API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/EndOfInputEvent">AWS
   * API Reference</a></p>
   */
  class EndOfInputEvent
  {
  public:
    AWS_QBUSINESS_API EndOfInputEvent();
    AWS_QBUSINESS_API EndOfInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API EndOfInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
