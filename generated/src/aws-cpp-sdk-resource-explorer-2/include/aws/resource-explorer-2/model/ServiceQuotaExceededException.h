/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>The request failed because it exceeds a service quota.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_RESOURCEEXPLORER2_API ServiceQuotaExceededException();
    AWS_RESOURCEEXPLORER2_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline ServiceQuotaExceededException& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline ServiceQuotaExceededException& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service quota that was exceeded by the request.</p>
     */
    inline ServiceQuotaExceededException& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline ServiceQuotaExceededException& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline ServiceQuotaExceededException& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The current value for the quota that the request tried to exceed.</p>
     */
    inline ServiceQuotaExceededException& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
