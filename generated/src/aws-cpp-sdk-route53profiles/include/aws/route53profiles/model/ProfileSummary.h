/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53profiles/model/ShareStatus.h>
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
namespace Route53Profiles
{
namespace Model
{

  /**
   * <p> Summary information about a Route 53 Profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ProfileSummary">AWS
   * API Reference</a></p>
   */
  class ProfileSummary
  {
  public:
    AWS_ROUTE53PROFILES_API ProfileSummary();
    AWS_ROUTE53PROFILES_API ProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API ProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ProfileSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ProfileSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ProfileSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the Profile. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the Profile. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProfileSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Share status of the Profile. </p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }
    inline ProfileSummary& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}
    inline ProfileSummary& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
