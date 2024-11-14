/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Defines a filter to retrieve opportunities based on the last modified date.
   * This filter is useful for tracking changes or updates to opportunities over
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LastModifiedDate">AWS
   * API Reference</a></p>
   */
  class LastModifiedDate
  {
  public:
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate();
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the date after which the opportunities were modified. Use this
     * filter to retrieve only those opportunities that were modified after a given
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterLastModifiedDate() const{ return m_afterLastModifiedDate; }
    inline bool AfterLastModifiedDateHasBeenSet() const { return m_afterLastModifiedDateHasBeenSet; }
    inline void SetAfterLastModifiedDate(const Aws::Utils::DateTime& value) { m_afterLastModifiedDateHasBeenSet = true; m_afterLastModifiedDate = value; }
    inline void SetAfterLastModifiedDate(Aws::Utils::DateTime&& value) { m_afterLastModifiedDateHasBeenSet = true; m_afterLastModifiedDate = std::move(value); }
    inline LastModifiedDate& WithAfterLastModifiedDate(const Aws::Utils::DateTime& value) { SetAfterLastModifiedDate(value); return *this;}
    inline LastModifiedDate& WithAfterLastModifiedDate(Aws::Utils::DateTime&& value) { SetAfterLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date before which the opportunities were modified. Use this
     * filter to retrieve only those opportunities that were modified before a given
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeLastModifiedDate() const{ return m_beforeLastModifiedDate; }
    inline bool BeforeLastModifiedDateHasBeenSet() const { return m_beforeLastModifiedDateHasBeenSet; }
    inline void SetBeforeLastModifiedDate(const Aws::Utils::DateTime& value) { m_beforeLastModifiedDateHasBeenSet = true; m_beforeLastModifiedDate = value; }
    inline void SetBeforeLastModifiedDate(Aws::Utils::DateTime&& value) { m_beforeLastModifiedDateHasBeenSet = true; m_beforeLastModifiedDate = std::move(value); }
    inline LastModifiedDate& WithBeforeLastModifiedDate(const Aws::Utils::DateTime& value) { SetBeforeLastModifiedDate(value); return *this;}
    inline LastModifiedDate& WithBeforeLastModifiedDate(Aws::Utils::DateTime&& value) { SetBeforeLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterLastModifiedDate;
    bool m_afterLastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_beforeLastModifiedDate;
    bool m_beforeLastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
