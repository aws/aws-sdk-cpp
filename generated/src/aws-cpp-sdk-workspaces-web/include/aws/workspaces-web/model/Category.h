/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
enum class Category {
  NOT_SET,
  Cults,
  Gambling,
  Nudity,
  Pornography,
  SexEducation,
  Tasteless,
  Violence,
  DownloadSites,
  ImageSharing,
  PeerToPeer,
  StreamingMediaAndDownloads,
  GenerativeAI,
  CriminalActivity,
  Hacking,
  HateAndIntolerance,
  IllegalDrug,
  IllegalSoftware,
  SchoolCheating,
  SelfHarm,
  Weapons,
  Chat,
  Games,
  InstantMessaging,
  ProfessionalNetwork,
  SocialNetworking,
  WebBasedEmail,
  ParkedDomains
};

namespace CategoryMapper {
AWS_WORKSPACESWEB_API Category GetCategoryForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForCategory(Category value);
}  // namespace CategoryMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
