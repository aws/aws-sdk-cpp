/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p> Tax inheritance information associated with the account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxInheritanceDetails">AWS
   * API Reference</a></p>
   */
  class TaxInheritanceDetails
  {
  public:
    AWS_TAXSETTINGS_API TaxInheritanceDetails();
    AWS_TAXSETTINGS_API TaxInheritanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxInheritanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline const Aws::String& GetInheritanceObtainedReason() const{ return m_inheritanceObtainedReason; }

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline bool InheritanceObtainedReasonHasBeenSet() const { return m_inheritanceObtainedReasonHasBeenSet; }

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline void SetInheritanceObtainedReason(const Aws::String& value) { m_inheritanceObtainedReasonHasBeenSet = true; m_inheritanceObtainedReason = value; }

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline void SetInheritanceObtainedReason(Aws::String&& value) { m_inheritanceObtainedReasonHasBeenSet = true; m_inheritanceObtainedReason = std::move(value); }

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline void SetInheritanceObtainedReason(const char* value) { m_inheritanceObtainedReasonHasBeenSet = true; m_inheritanceObtainedReason.assign(value); }

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithInheritanceObtainedReason(const Aws::String& value) { SetInheritanceObtainedReason(value); return *this;}

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithInheritanceObtainedReason(Aws::String&& value) { SetInheritanceObtainedReason(std::move(value)); return *this;}

    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithInheritanceObtainedReason(const char* value) { SetInheritanceObtainedReason(value); return *this;}


    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = value; }

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::move(value); }

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline void SetParentEntityId(const char* value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId.assign(value); }

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}

    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline TaxInheritanceDetails& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}

  private:

    Aws::String m_inheritanceObtainedReason;
    bool m_inheritanceObtainedReasonHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
