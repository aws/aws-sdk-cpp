/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/CoreNetworkPolicyError.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network policy exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkPolicyException">AWS
   * API Reference</a></p>
   */
  class CoreNetworkPolicyException
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkPolicyException();
    AWS_NETWORKMANAGER_API CoreNetworkPolicyException(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicyException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline CoreNetworkPolicyException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline CoreNetworkPolicyException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline CoreNetworkPolicyException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline const Aws::Vector<CoreNetworkPolicyError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline void SetErrors(const Aws::Vector<CoreNetworkPolicyError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline void SetErrors(Aws::Vector<CoreNetworkPolicyError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline CoreNetworkPolicyException& WithErrors(const Aws::Vector<CoreNetworkPolicyError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline CoreNetworkPolicyException& WithErrors(Aws::Vector<CoreNetworkPolicyError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline CoreNetworkPolicyException& AddErrors(const CoreNetworkPolicyError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Describes a core network policy exception.</p>
     */
    inline CoreNetworkPolicyException& AddErrors(CoreNetworkPolicyError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<CoreNetworkPolicyError> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
