/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>The request processing has failed because of an internal error in the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API InternalServerException();
    AWS_MANAGEDBLOCKCHAINQUERY_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container for the exception message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The container for the exception message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The container for the exception message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The container for the exception message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The container for the exception message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The container for the exception message.</p>
     */
    inline InternalServerException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The container for the exception message.</p>
     */
    inline InternalServerException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The container for the exception message.</p>
     */
    inline InternalServerException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The container of the <code>retryAfterSeconds</code> value.</p>
     */
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>The container of the <code>retryAfterSeconds</code> value.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>The container of the <code>retryAfterSeconds</code> value.</p>
     */
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>The container of the <code>retryAfterSeconds</code> value.</p>
     */
    inline InternalServerException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
