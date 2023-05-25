/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about the listener rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_VPCLATTICE_API RuleSummary();
    AWS_VPCLATTICE_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline RuleSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline RuleSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the rule.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Indicates whether this is the default rule. Listener rules are created when
     * you create a listener. Each listener has a default rule for checking connection
     * requests. </p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Indicates whether this is the default rule. Listener rules are created when
     * you create a listener. Each listener has a default rule for checking connection
     * requests. </p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Indicates whether this is the default rule. Listener rules are created when
     * you create a listener. Each listener has a default rule for checking connection
     * requests. </p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Indicates whether this is the default rule. Listener rules are created when
     * you create a listener. Each listener has a default rule for checking connection
     * requests. </p>
     */
    inline RuleSummary& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline RuleSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline RuleSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The priority of the rule. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p> The priority of the rule. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p> The priority of the rule. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p> The priority of the rule. </p>
     */
    inline RuleSummary& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
