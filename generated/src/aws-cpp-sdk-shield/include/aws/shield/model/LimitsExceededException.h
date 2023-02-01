/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Exception that indicates that the operation would exceed a
   * limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/LimitsExceededException">AWS
   * API Reference</a></p>
   */
  class LimitsExceededException
  {
  public:
    AWS_SHIELD_API LimitsExceededException();
    AWS_SHIELD_API LimitsExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API LimitsExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitsExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitsExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitsExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline LimitsExceededException& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline LimitsExceededException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of limit that would be exceeded.</p>
     */
    inline LimitsExceededException& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The threshold that would be exceeded.</p>
     */
    inline long long GetLimit() const{ return m_limit; }

    /**
     * <p>The threshold that would be exceeded.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The threshold that would be exceeded.</p>
     */
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The threshold that would be exceeded.</p>
     */
    inline LimitsExceededException& WithLimit(long long value) { SetLimit(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    long long m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
