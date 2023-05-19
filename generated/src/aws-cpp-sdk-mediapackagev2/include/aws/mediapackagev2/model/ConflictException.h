/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ConflictExceptionType.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Updating or deleting this resource can cause an inconsistent
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_MEDIAPACKAGEV2_API ConflictException();
    AWS_MEDIAPACKAGEV2_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The type of ConflictException.</p>
     */
    inline const ConflictExceptionType& GetConflictExceptionType() const{ return m_conflictExceptionType; }

    /**
     * <p>The type of ConflictException.</p>
     */
    inline bool ConflictExceptionTypeHasBeenSet() const { return m_conflictExceptionTypeHasBeenSet; }

    /**
     * <p>The type of ConflictException.</p>
     */
    inline void SetConflictExceptionType(const ConflictExceptionType& value) { m_conflictExceptionTypeHasBeenSet = true; m_conflictExceptionType = value; }

    /**
     * <p>The type of ConflictException.</p>
     */
    inline void SetConflictExceptionType(ConflictExceptionType&& value) { m_conflictExceptionTypeHasBeenSet = true; m_conflictExceptionType = std::move(value); }

    /**
     * <p>The type of ConflictException.</p>
     */
    inline ConflictException& WithConflictExceptionType(const ConflictExceptionType& value) { SetConflictExceptionType(value); return *this;}

    /**
     * <p>The type of ConflictException.</p>
     */
    inline ConflictException& WithConflictExceptionType(ConflictExceptionType&& value) { SetConflictExceptionType(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConflictExceptionType m_conflictExceptionType;
    bool m_conflictExceptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
